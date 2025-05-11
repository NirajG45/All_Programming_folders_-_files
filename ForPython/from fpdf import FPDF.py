from fpdf import FPDF

# Clean resume content (Internship Killer Resume for Subh)
resume_lines = {
    "header": {
        "name": "Niraj Kumar (Subh)",
        "title": "BCA Student | Data Science Enthusiast | Python & C++ Programmer"
    },
    "contact": [
        "📧 Email: your.email@example.com",
        "📱 Phone: +91-XXXXXXXXXX",
        "🌐 GitHub: github.com/yourusername",
        "🔗 LinkedIn: linkedin.com/in/yourusername"
    ],
    "summary": [
        "Motivated 2nd-year BCA student specializing in Data Science with a strong academic record (SGPA: 8.96).",
        "Skilled in Python, C++, MySQL, HTML, CSS, JavaScript, and basic Machine Learning.",
        "Completed ADCA diploma; passionate about AI/ML with a goal to master the field by 2026."
    ],
    "skills": [
        "Programming: Python, C++, JavaScript",
        "Web: HTML, CSS, Bootstrap (basics)",
        "Database: MySQL",
        "Tools: VS Code, Git, Canva, Jupyter Notebook",
        "Other: ADCA Certified, Basic Excel, PowerPoint"
    ],
    "projects": [
        "Iris Flower Classification (ML Project using Python and scikit-learn)",
        "Student Record Manager (Python + MySQL)",
        "Portfolio Website (HTML, CSS, JavaScript)",
        "Mini Calculator (Python GUI using Tkinter)"
    ],
    "education": [
        "BCA (Data Science Specialization), 2nd Year",
        "SGPA (Last Semester): 8.96",
        "ADCA Diploma – 1 Year (Advanced Diploma in Computer Applications)"
    ],
    "interests": [
        "Artificial Intelligence, Machine Learning, Deep Learning",
        "Open Source Projects, Kaggle Challenges, Space Tech"
    ]
}

# PDF formatting
class ResumePDF(FPDF):
    def header(self):
        self.set_font("Arial", "B", 16)
        self.cell(0, 10, resume_lines["header"]["name"], ln=True, align="C")
        self.set_font("Arial", "I", 12)
        self.cell(0, 10, resume_lines["header"]["title"], ln=True, align="C")
        self.ln(5)

    def section_title(self, title):
        self.set_font("Arial", "B", 13)
        self.set_text_color(40, 40, 160)
        self.cell(0, 10, title, ln=True)
        self.set_text_color(0, 0, 0)

    def section_body(self, items):
        self.set_font("Arial", "", 11)
        for item in items:
            self.multi_cell(0, 8, f"- {item}")
        self.ln(3)

# Create the resume PDF
pdf = ResumePDF()
pdf.add_page()

pdf.section_title("Contact")
pdf.section_body(resume_lines["contact"])

pdf.section_title("Professional Summary")
pdf.section_body(resume_lines["summary"])

pdf.section_title("Skills")
pdf.section_body(resume_lines["skills"])

pdf.section_title("Projects")
pdf.section_body(resume_lines["projects"])

pdf.section_title("Education")
pdf.section_body(resume_lines["education"])

pdf.section_title("Interests")
pdf.section_body(resume_lines["interests"])

# Output path
resume_path = "/mnt/data/Subh_Internship_Killer_Resume.pdf"
pdf.output(resume_path)

resume_path
